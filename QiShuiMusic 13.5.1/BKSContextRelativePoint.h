@interface BKSContextRelativePoint : NSObject
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) I contextID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)point;
- (id)initWithBSXPCCoder:;
- (unsigned int)contextID;
- (unsigned long long)hash;
- (void)encodeWithBSXPCCoder:;
- (BOOL)isEqual:;
- (id)initWithPoint:contextID:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
