@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
@property (nonatomic) double huggingPriority;
@property (nonatomic) double compressionResistancePriority;
- (double)compressionResistancePriority;
- (double)huggingPriority;
- (id)initWithLayoutItem:value:huggingPriority:compressionResistancePriority:orientation:;
- (double)priorityForVariable:;
- (id)_priorityDescription;
@end
