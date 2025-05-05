@interface HTSLiveTemplateProviderAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parseDisplayText:withDIContext:;
- (id)parseCombinedText:configuration:diContext:;
- (id)parseDisplayText:configuration:diContext:;
- (id)parseEnableSchemaInfoDisplayText:configuration:diContext:;
- (id)parsePiecesFromDisplayText:configuration:diContext:;
- (id)templateForKey:defaultPattern:;
@end
