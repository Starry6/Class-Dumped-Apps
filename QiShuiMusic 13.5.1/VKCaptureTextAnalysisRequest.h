@interface VKCaptureTextAnalysisRequest : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) VKQuad focusQuad;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} focusRect;
@property (nonatomic) <VKCaptureTextAnalysisRequestDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (void).cxx_destruct;
- (id)requestHandler;
- (id)image;
- (id)copyWithZone:;
- (BOOL)saveAssetsToFeedbackAttachmentsFolder:error:;
- (id)initWithImage:delegate:;
- (id)initWithImage:focusRect:delegate:;
- (id)initWithImage:focusQuad:delegate:;
- (id)focusRect;
- (id)focusQuad;
@end
