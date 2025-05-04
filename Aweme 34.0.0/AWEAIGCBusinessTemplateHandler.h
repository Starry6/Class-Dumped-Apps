@interface AWEAIGCBusinessTemplateHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseAIProcessServiceResultWith:requestModel:completion:;
- (id)constructionServerRequestJsonStringWithModel:tosImages:;
- (id)constructionServerRequestDictionaryWithModel:tosImages:;
- (void)parseServiceResultWith:requestModel:completion:;
- (id)convertImageWithId:imageTos:source:aigcJson:aigcParams:;
- (id)parseWithRequest:resultModel:;
- (id)parseWithRequestInOldWay:resultModel:;
- (void)downloadPictureWithResult:requestModel:completion:;
@end
