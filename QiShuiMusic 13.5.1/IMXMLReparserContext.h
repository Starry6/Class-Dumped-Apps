@interface IMXMLReparserContext : NSObject
@property (nonatomic) NSString _inContent;
@property (nonatomic) NSArray attributesToPreserve;
@property (nonatomic) NSDictionary attributesToMerge;
@property (nonatomic) NSError error;
@property (nonatomic) NSString outContent;
- (void)dealloc;
- (id)error;
- (id)initWithContent:attributesToPreserve:attributesToMerge:;
- (void)_setOutContent:error:;
- (id)_inContent;
- (id)attributesToPreserve;
- (id)attributesToMerge;
- (id)outContent;
@end
