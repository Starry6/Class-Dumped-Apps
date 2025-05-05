@interface IESECActionPathImpl : NSObject
@property (nonatomic) NSString pathID;
@property (nonatomic) NSArray nodes;
@property (nonatomic) q enterTimestamp;
@property (nonatomic) q quitTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)appendActionLogNode:;
- (long long)enterTimestamp;
- (id)pathID;
- (long long)quitTimestamp;
- (id)toJSONStr;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)nodes;
- (void).cxx_destruct;
- (id)toJSON;
@end
