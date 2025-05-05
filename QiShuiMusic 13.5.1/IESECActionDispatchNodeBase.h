@interface IESECActionDispatchNodeBase : NSObject
@property (nonatomic) q type;
@property (nonatomic) q timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toJSONStr;
- (id)init;
- (long long)timestamp;
- (id)toJSON;
@end
