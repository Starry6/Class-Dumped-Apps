@interface ABUCustomServerBiddingManager : ABUServerBiddingManager
- (id)convertBiddingResult:;
- (id)convertToBiddingExtra:;
- (id)convertToWinners:;
- (id)decryptJsonData:withError:;
- (void)realStartBiddingWithParams:complete:;
@end
