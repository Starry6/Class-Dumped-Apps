@interface AWEFeedPlayableTestTrackContext : NSObject
@property (nonatomic) NSString playableUrl;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSString event;
@property (nonatomic) NSString label;
- (void)setPlayableUrl:;
- (id)playableUrl;
- (void)setLabel:;
- (id)itemID;
- (void)setItemID:;
- (void)setEvent:;
- (id)label;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)event;
@end
