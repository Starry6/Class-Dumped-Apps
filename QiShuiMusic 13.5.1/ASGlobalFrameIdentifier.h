@interface ASGlobalFrameIdentifier : NSObject
@property (nonatomic) NSNumber webPageID;
@property (nonatomic) NSNumber webFrameID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPageID:frameID:;
- (id)webPageID;
- (id)webFrameID;
- (id)initWithCoreFrameIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
