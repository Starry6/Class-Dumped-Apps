@interface AWEDetailServiceProvider : IESServiceProvider
- (id)sectionControllerForObject:;
- (void)trackStayTime;
- (void)startTimingForTrack;
- (id)separateLineSectionController;
- (id)newHeaderInfoSectionController;
- (id)headerInfoSectionController;
- (id)linkSectionController;
- (id)verifiedUserSectionController;
- (id)challangeEntranceSectionController;
- (id)taskLiteSectionController;
- (id)aiLoraProfileSectionController;
- (id)aiWarningNoticeSectionController;
@end
