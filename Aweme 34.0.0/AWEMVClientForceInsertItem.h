@interface AWEMVClientForceInsertItem : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q priority;
@property (nonatomic) Q cardType;
@property (nonatomic) Q method;
@property (nonatomic) Q position;
@property (nonatomic) Q customSpecificPosition;
@property (nonatomic) Q fallBackStrategy;
@property (nonatomic) @? completion;
- (void)setFallBackStrategy:;
- (unsigned long long)fallBackStrategy;
- (unsigned long long)customSpecificPosition;
- (void)setCustomSpecificPosition:;
- (void)setModel:;
- (id)completion;
- (void)setCompletion:;
- (unsigned long long)position;
- (void)setMethod:;
- (unsigned long long)priority;
- (id)model;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)method;
- (void)setPosition:;
- (unsigned long long)cardType;
- (void)setCardType:;
@end
