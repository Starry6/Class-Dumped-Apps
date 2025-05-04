@interface AWEIMAudioTranslateResponseModel : NSObject
@property (nonatomic) NSArray translateResults;
@property (nonatomic) AWEIMAudioTranslateResponseExtra extraModel;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
- (id)extraModel;
- (void)setExtraModel:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)translateResults;
- (void)setTranslateResults:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)initWithDictionary:;
@end
