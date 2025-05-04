@interface AWEFeedMixRichAwemeManager : NSObject
@property (nonatomic) NSMutableDictionary richIndexDict;
- (void)handleRichAwemeForMixWithContext:;
- (id)richIndexDict;
- (void)recordRichAwemeForMixWithItemID:currentIndex:;
- (void)setRichIndexDict:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
