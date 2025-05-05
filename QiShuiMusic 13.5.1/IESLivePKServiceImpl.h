@interface IESLivePKServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncParseSEI:completion:;
- (void)dealShareWithDoubleInterationResult:roomScene:containerView:completion:;
- (void)dealShareWithDoubleInterationSEI:roomScene:containerView:completion:;
- (void)dealWithDoubleInterationResult:isPreview:roomScene:isPCVerticalRoom:completion:;
- (void)dealWithDoubleInterationSEI:isPreview:roomScene:completion:;
@end
