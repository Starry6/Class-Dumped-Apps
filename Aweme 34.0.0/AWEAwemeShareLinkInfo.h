@interface AWEAwemeShareLinkInfo : NSObject
@property (nonatomic) NSString sharerID;
@property (nonatomic) NSString secSharerID;
@property (nonatomic) NSString linkID;
@property (nonatomic) NSString source;
- (id)secSharerID;
- (void)setupLinkInfoWithParams:;
- (id)sharerID;
- (void)setSharerID:;
- (void)setSecSharerID:;
- (id)initWithParams:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)linkID;
- (void)setLinkID:;
@end
