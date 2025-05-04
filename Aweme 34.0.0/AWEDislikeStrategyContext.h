@interface AWEDislikeStrategyContext : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q buttonType;
@property (nonatomic) Q methodType;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) @? completion;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString dislikeType;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)enterMethod;
- (id)enterFrom;
- (void)setMethodType:;
- (unsigned long long)methodType;
- (id)dislikeType;
- (void)setDislikeType:;
- (id)initWithModel:enterFrom:;
- (unsigned long long)buttonType;
- (void)setModel:;
- (id)completion;
- (void)setCompletion:;
- (id)model;
- (void).cxx_destruct;
- (void)setButtonType:;
@end
