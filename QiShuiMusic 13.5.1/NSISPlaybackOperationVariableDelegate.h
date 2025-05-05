@interface NSISPlaybackOperationVariableDelegate : NSObject
@property (nonatomic) NSISVariable variable;
@property (nonatomic) NSString variableDescription;
@property (nonatomic) NSString markedConstraintDescription;
@property (nonatomic) BOOL variableIsUserObservable;
@property (nonatomic) NSInteger orientationHint;
- (int)orientationHint;
- (void)dealloc;
- (int)nsis_orientationHintForVariable:;
- (BOOL)nsis_valueOfVariableIsUserObservable:;
- (id)variable;
- (void)nsis_valueOfVariable:didChangeInEngine:;
- (id)firstItem;
- (id)description;
- (id)nsis_descriptionOfVariable:;
- (void)_addToEngine:;
- (id)secondItem;
- (void)setVariable:;
- (id)variableDescription;
- (void)setVariableDescription:;
- (id)markedConstraintDescription;
- (void)setMarkedConstraintDescription:;
- (BOOL)variableIsUserObservable;
- (void)setVariableIsUserObservable:;
- (void)setOrientationHint:;
@end
