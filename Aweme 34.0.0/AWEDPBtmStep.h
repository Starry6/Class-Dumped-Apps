@interface AWEDPBtmStep : AWEWorkflowStep
- (void)onStep:linkSession:;
- (id)getExternalEvokeBcmFromUrl:;
- (id)virtualNodeDict;
- (id)deeplinkWebviewUrlLocationList;
- (id)deeplinkBcmAndLocationAllowlist;
- (id)getDecodeString:;
@end
