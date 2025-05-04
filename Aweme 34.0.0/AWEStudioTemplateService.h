@interface AWEStudioTemplateService : HTSService
@property (nonatomic) <AWEStudioTemplateCutSameServiceProtocol> cutSame;
@property (nonatomic) <AWEStudioTemplatePixelServiceProtocol> pixel;
@property (nonatomic) <AWEStudioTemplateTrackerServiceProtocol> tracker;
@property (nonatomic) <AWEStudioTemplateUtilsServiceProtocol> utils;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cutSame;
- (id)tracker;
- (void).cxx_destruct;
- (id)pixel;
- (id)utils;
@end
