@interface BDHMXTTNetRequest : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncRequestWithURL:method:headerField:params:useAutoTagInfo:callBack:;
@end
