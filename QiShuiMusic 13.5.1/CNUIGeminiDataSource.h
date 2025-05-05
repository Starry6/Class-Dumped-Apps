@interface CNUIGeminiDataSource : NSObject
@property (nonatomic) CNGeminiManager geminiManager;
@property (nonatomic) CNGeminiResult geminiResult;
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) <CNUIGeminiDataSourceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contact;
- (void)setContact:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)geminiManager;
- (void)applicationWillEnterForeground:;
- (void)setGeminiManager:;
- (void)setGeminiResult:;
- (id)geminiResult;
- (id)channelIdentifier;
- (void)channelsDidChangeForGeminiManager:;
- (id)initWithGeminiManager:;
- (void)resetDataSource;
@end
