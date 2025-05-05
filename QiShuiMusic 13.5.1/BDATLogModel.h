@interface BDATLogModel : NSObject
@property (nonatomic) NSString rit;
@property (nonatomic) NSString reqId;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString event;
@property (nonatomic) NSString label;
@property (nonatomic) NSNumber urlSize;
- (id)rit;
- (void)setRit:;
- (BOOL)isSameKey:;
- (id)logExtra;
- (id)reqId;
- (void)setLogExtra:;
- (void)setReqId:;
- (void)setUrlSize:;
- (void)setEvent:;
- (id)event;
- (id)urlSize;
- (void)setLabel:;
- (id)label;
- (id)cid;
- (void).cxx_destruct;
- (id)description;
- (void)setCid:;
+ (id)logModelWithEvent:label:cid:logExtra:urlSize:;
@end
