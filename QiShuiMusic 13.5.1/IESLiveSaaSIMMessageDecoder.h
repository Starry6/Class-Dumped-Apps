@interface IESLiveSaaSIMMessageDecoder : NSObject
@property (nonatomic) <IESLiveSaaSMessageValueTransfomer> transformer;
@property (nonatomic) BOOL enableMessageFetchLog;
@property (nonatomic) Q type;
@property (nonatomic) <IESLiveIMDecoder> nextDecoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)decode:completion:;
- (BOOL)enableMessageFetchLog;
- (id)initWithTransfomer:;
- (id)parsePBMessages:extra:;
- (id)parsePBMessages:toExtra:;
- (void)setEnableMessageFetchLog:;
- (id)init;
- (void)setTransformer:;
- (id)transformer;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
