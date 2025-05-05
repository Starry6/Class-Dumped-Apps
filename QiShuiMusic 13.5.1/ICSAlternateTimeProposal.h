@interface ICSAlternateTimeProposal : ICSProperty
@property (nonatomic) ICSDateTimeValue startDate;
@property (nonatomic) NSInteger status;
- (void)setStatus:;
- (id)startDate;
- (void)setStartDate:;
- (void)_ICSStringWithOptions:appendingToString:;
- (int)status;
+ (id)ICSStringFromAlternateTimeProposalStatus:;
+ (int)statusFromICSString:;
+ (id)alternateTimeProposalFromICSCString:;
+ (id)_parseICSString:;
@end
