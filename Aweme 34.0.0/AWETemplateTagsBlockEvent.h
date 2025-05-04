@interface AWETemplateTagsBlockEvent : AWETemplateTagsTriggerEvent
@property (nonatomic) NSString userID;
@property (nonatomic) q blockStatus;
- (long long)blockStatus;
- (void)setBlockStatus:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
@end
