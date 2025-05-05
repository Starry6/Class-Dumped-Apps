@interface SATaskStateInTransition : SATaskState
- (id)initWithKCDataTransitioningTask:andTerminatedThreadsInstructionCycles:machTimebase:andDonatingUniquePids:startTimestamp:endTimestamp:startSampleIndex:endSampleIndex:;
- (unsigned long long)transitionType;
@end
