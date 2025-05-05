@interface BKSTouchDeliveryUpdate : NSObject
@property (nonatomic) q type;
@property (nonatomic) I touchIdentifier;
@property (nonatomic) BOOL isDetached;
@property (nonatomic) I contextID;
@property (nonatomic) NSInteger pid;
- (unsigned int)contextID;
- (void)setType:;
- (void)setTouchIdentifier:;
- (void)setContextID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (int)pid;
- (BOOL)isDetached;
- (id)description;
- (unsigned int)touchIdentifier;
- (BOOL)isEqual:;
- (void)setPid:;
- (void)setIsDetached:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
