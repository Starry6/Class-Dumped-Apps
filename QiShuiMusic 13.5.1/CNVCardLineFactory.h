@interface CNVCardLineFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lineWithLiteralValue:;
- (id)versionPlaceholderLine;
- (id)stringLineWithName:value:;
- (id)arrayLineWithName:value:;
- (id)arrayLineWithName:value:itemSeparator:;
- (id)dataLineWithName:value:;
+ (id)version30LineFactory;
+ (id)version21LineFactory;
@end
