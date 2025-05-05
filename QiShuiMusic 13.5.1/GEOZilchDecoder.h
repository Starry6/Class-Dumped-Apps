@interface GEOZilchDecoder : GEOMapRequestManager
@property (nonatomic) NSObject<OS_dispatch_queue> decoderQueue;
@property (nonatomic) <GEOMapAccessRestrictions> mapAccessRestrictions;
- (id)init;
- (void)setRequestQueue:;
- (id)requestQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)trackRequest:;
- (void)requestComplete:;
- (id)decodeZilchMessage:pathHandler:errorHandler:;
- (id)decoderQueue;
- (id)mapAccessRestrictions;
- (void)setMapAccessRestrictions:;
+ (BOOL)decodingSupported;
@end
