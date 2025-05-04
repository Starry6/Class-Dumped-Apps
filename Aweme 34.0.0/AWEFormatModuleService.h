@interface AWEFormatModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enterFormatRoomWithFormatModel:;
- (void)transferToProfileManagerWithEnterFrom:enterMethod:extra:;
- (void)transferToProfileActive:enterFrom:enterMethod:;
- (id)formatFeedEntryView;
- (id)trackService;
- (id)formatLiveInterface;
- (long long)forbidEnterFormatRoom;
- (id)p_profileSchema:addQuery:;
@end
