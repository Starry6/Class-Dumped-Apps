@interface CPAssistantCellConfiguration : NSObject
@property (nonatomic) q position;
@property (nonatomic) q visibility;
@property (nonatomic) q assistantAction;
- (long long)position;
- (long long)visibility;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqualToConfiguration:;
- (BOOL)isEqual:;
- (id)initWithPosition:visibility:assistantAction:;
- (long long)assistantAction;
+ (BOOL)supportsSecureCoding;
@end
