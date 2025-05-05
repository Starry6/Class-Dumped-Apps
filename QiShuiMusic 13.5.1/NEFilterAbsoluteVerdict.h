@interface NEFilterAbsoluteVerdict : NEFilterVerdict
@property (nonatomic) Q inboundPassOffset;
@property (nonatomic) Q inboundPeekOffset;
@property (nonatomic) Q outboundPassOffset;
@property (nonatomic) Q outboundPeekOffset;
@property (nonatomic) q statisticsReportFrequency;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (long long)filterAction;
- (long long)statisticsReportFrequency;
- (void)setStatisticsReportFrequency:;
- (id)initWithDrop:inboundPassOffset:inboundPeekOffset:outboundPassOffset:outboundPeekOffset:;
- (unsigned long long)inboundPassOffset;
- (void)setInboundPassOffset:;
- (unsigned long long)inboundPeekOffset;
- (void)setInboundPeekOffset:;
- (unsigned long long)outboundPassOffset;
- (void)setOutboundPassOffset:;
- (unsigned long long)outboundPeekOffset;
- (void)setOutboundPeekOffset:;
+ (BOOL)supportsSecureCoding;
@end
