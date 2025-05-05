@interface IESLiveSaaSWebPResourceModel : BDDynamicModel
@property (nonatomic) NSString portraitUrlStr;
@property (nonatomic) NSString landscapeUrlStr;
@property (nonatomic) Q currentOrientation;
- (void)_parseConfigFileWithDirectory:;
- (id)createDecoderWithOrientation:;
- (id)currentUrl;
- (id)initWithDirectory:;
@end
