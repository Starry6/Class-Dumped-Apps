@interface IESECActionLogNodeBase : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSDictionary info;
@property (nonatomic) q timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toJSONStr;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (long long)timestamp;
- (id)info;
- (id)initWithTimestamp:;
- (id)copyWithZone:;
- (id)toJSON;
@end
