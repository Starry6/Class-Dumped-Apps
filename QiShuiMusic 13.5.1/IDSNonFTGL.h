@interface IDSNonFTGL : IDSGlobalLink
- (void)disconnectWithCompletionHandler:;
- (void)startWithOptions:;
- (BOOL)_setupNewQRLinkIfNecessary:;
- (BOOL)_processRemovedLocalAddressList:;
- (void)_notifyCandidatePairConnected:;
- (void)_notifyCandidatePairDisconnected:withReason:;
- (void)_notifyDefaultUnderlyingLinkChanged:error:;
- (void)_setFirstDefaultCandidatePair:;
- (BOOL)_isBetterCandidatePair:newCandidatePair:;
- (void)_selectBetterDefaultCandidatePair:;
- (id)_nextConnectedCandidatePair;
- (void)_selectDefaultCandidatePair;
- (void)setPacketNotificationFilter:uniqueTag:isEnabled:;
- (void)dropIPPackets:payloadArray:;
- (void)updateProtocolQualityOfService:isGood:;
- (void)stopKeepAlive:;
- (void)currentCellularSignalStrength:signalStrength:signalGrade:;
- (void)_startHB:;
- (void)_handleNewRATChange;
- (void)_handleNoRemotePacket;
- (void)_setDefaultCandidatePairForNonFT;
- (void)_handleRemapping:errorCode:reconnectQUIC:;
@end
