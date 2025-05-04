@interface AWEPOIBTMInfo : NSObject
@property (nonatomic) NSString btm;
@property (nonatomic) Q eventType;
@property (nonatomic) UIResponder responder;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBTMChain;
@property (nonatomic) q btmChainLength;
- (id)btm;
- (void)setBtm:;
- (BOOL)enterNewPage;
- (void)setEnterNewPage:;
- (BOOL)addBTMChain;
- (void)setAddBTMChain:;
- (long long)btmChainLength;
- (void)setBtmChainLength:;
- (void)setEventType:;
- (unsigned long long)eventType;
- (id)responder;
- (void)setResponder:;
- (void).cxx_destruct;
+ (id)btmInfoWithBTM:responder:eventType:enterNewPage:addBTMChain:btmChainLength:;
+ (id)btmInfoWithBTM:responder:eventType:enterNewPage:;
+ (id)btmInfoWithBTM:responder:eventType:;
@end
