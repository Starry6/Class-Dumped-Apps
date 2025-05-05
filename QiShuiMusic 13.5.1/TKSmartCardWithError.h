@interface TKSmartCardWithError : TKSmartCard
- (void).cxx_destruct;
- (void)beginSessionWithReply:;
- (void)transmitRequest:reply:;
- (void)sendIns:p1:p2:data:le:reply:;
- (id)initWithCard:error:;
@end
