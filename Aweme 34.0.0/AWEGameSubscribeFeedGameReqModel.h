@interface AWEGameSubscribeFeedGameReqModel : NSObject
@property (nonatomic) BOOL to_subscribe;
@property (nonatomic) NSString mp_id;
@property (nonatomic) q scene;
@property (nonatomic) BOOL sub_all;
@property (nonatomic) BOOL un_sub_all;
- (void)setMp_id:;
- (void)setTo_subscribe:;
- (void)setSub_all:;
- (void)setUn_sub_all:;
- (BOOL)sub_all;
- (id)mp_id;
- (BOOL)to_subscribe;
- (BOOL)un_sub_all;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
@end
