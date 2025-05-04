@interface AWEPublishAnchorCacheService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorInfoList;
- (void)updateAnchorInfoWithID:title:;
- (BOOL)isSupportUpdateAnchorInfoWithAnchorType:;
- (void)updatePublishAnchorInfoWithAnchorID:title:;
- (id)getAnchorInfoWithID:;
- (void)sendNotifyWithID:title:;
- (void)fetchEffectAndUpdateAnchorInfoWithID:isSendNotify:;
- (void)fetchTemplateAndUpdateAnchorInfoWithID:templateSource:isSendNotify:;
- (id)init;
@end
