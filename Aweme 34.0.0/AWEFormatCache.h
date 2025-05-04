@interface AWEFormatCache : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBotIdCacheByFormatId:formatId:;
- (void)setFormatIdCacheByBotId:botId:;
- (id)getBotIdCacheByFormatId:;
- (id)getFormatIdCacheByBotId:;
- (BOOL)currentFormatOwnerHasConfirmGuide:;
- (void)setCurrentFormatOwnerGuideState:didConfirm:;
- (id)getBotIdCacheKeyWithFormatId:;
- (id)getFormatIdCacheKeyWithBotId:;
- (id)getFormatGuideCacheKey:;
@end
