@interface AWEStudioTemplatePixelService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSlotsContainingPreprocessType:slot:;
- (void)fetchTemplateModelWithTemplateId:templateType:completion:;
@end
