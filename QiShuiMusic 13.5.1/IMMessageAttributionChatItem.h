@interface IMMessageAttributionChatItem : IMMessageStatusChatItem
@property (nonatomic) NSDictionary attributionInfo;
@property (nonatomic) q attributionType;
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL showsLearnMoreLink;
- (void).cxx_destruct;
- (id)bundleID;
- (long long)attributionType;
- (BOOL)showsLearnMoreLink;
- (id)attributionInfo;
- (id)_initWithItem:attributionInfo:attributionType:showsLearnMoreLink:;
@end
