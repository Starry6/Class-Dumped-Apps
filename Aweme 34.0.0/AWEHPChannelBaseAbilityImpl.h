@interface AWEHPChannelBaseAbilityImpl : NSObject
@property (nonatomic) AWEFeedChannelObject channel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSelectedChannelManagerUsingFilter:completion:;
- (BOOL)enumerateParentChannelManagerUsingBlock:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
@end
