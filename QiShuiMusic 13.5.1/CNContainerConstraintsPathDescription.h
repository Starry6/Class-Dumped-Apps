@interface CNContainerConstraintsPathDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
@end
