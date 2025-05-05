@interface CalLogXMLFormatter : NSObject
@property (nonatomic) BOOL shouldPrettyPrint;
@property (nonatomic) BOOL useTinyElementNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)newFormattedString:;
- (BOOL)shouldPrettyPrint;
- (void)setShouldPrettyPrint:;
- (BOOL)useTinyElementNames;
- (void)setUseTinyElementNames:;
@end
