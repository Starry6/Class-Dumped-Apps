@interface TSPortInterface : NSObject
@property (nonatomic) TSgPTPPort port;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)port;
- (void)setPort:;
- (void).cxx_destruct;
- (void)didTimeoutOnMACLookupForPort:;
- (id)initWithgPTPPort:onClockIdentifier:;
- (void)setMACLookupTimeoutCallback:refcon:;
@end
