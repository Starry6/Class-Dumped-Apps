@interface AWEDCFeedDataCommonLynxFilter : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncProcessDataArrayWithRequestType:modelArray:args:completion:;
- (BOOL)isSpecialCard:;
- (id)classNameWithReferString;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupWithContext:;
@end
