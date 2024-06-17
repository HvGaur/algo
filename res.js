// ResumeForm.js
import React, { useState } from 'react';

const ResumeForm = ({ onSubmit }) => {
  const [name, setName] = useState('');
  const [email, setEmail] = useState('');
  const [education, setEducation] = useState('');

  const handleSubmit = (e) => {
    e.preventDefault();
    onSubmit({ name, email, education });
  };

  return (
    <form onSubmit={handleSubmit}>
      <label>
        Name:
        <input type="text" value={name} onChange={(e) => setName(e.target.value)} />
      </label>
      <label>
        Email:
        <input type="email" value={email} onChange={(e) => setEmail(e.target.value)} />
      </label>
      <label>
        Education:
        <input type="text" value={education} onChange={(e) => setEducation(e.target.value)} />
      </label>
      <button type="submit">Generate Resume</button>
    </form>
  );
};

export default ResumeForm;
