@interface AWEAIGCBusinessTemplateV2Handler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseAIProcessServiceResultWith:requestModel:completion:;
- (id)constructionServerRequestJsonStringWithModel:tosImages:;
- (id)constructionServerRequestDictionaryWithModel:tosImages:;
- (void)parseServiceResultWith:requestModel:completion:;
- (id)generateEffectParam:tosImages:;
- (id)generateResourceList:tosImages:;
- (id)convertToGraphWithImageId:isAsync:imageTos:source:aigcJson:aigcParams:;
+ (void)downloadResultResourceWithResourceMap:requestResourceCount:ignoreResourceCountCheck:ignoreNonFatalError:targetFolder:completion:;
+ (id)fetchResultAbstractWithResourceMap:;
+ (void)_downloadResourceWithResultAbstract:targetFolder:ignoreNonFatalError:completion:;
@end
