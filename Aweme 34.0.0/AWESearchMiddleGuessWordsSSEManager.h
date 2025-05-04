@interface AWESearchMiddleGuessWordsSSEManager : NSObject
@property (nonatomic) NSDictionary middleGSData;
@property (nonatomic) NSDate updateD;
- (void)setMiddleGSData:;
- (void)setUpdateD:;
- (id)middleGSData;
- (id)updateD;
- (void)clearSSEMiddlePageGSData;
- (void)updateSSEMiddlePageGSData:;
- (id)getValidMiddlePageGSData;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
