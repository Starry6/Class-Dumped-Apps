@interface TKSEPClientTokenObject : TKClientTokenObject
@property (nonatomic) TKSEPKey key;
- (id)key;
- (id)withError:invoke:;
- (void).cxx_destruct;
- (id)operation:data:algorithms:parameters:error:;
- (BOOL)deleteWithError:;
- (id)initWithSession:key:error:;
@end
