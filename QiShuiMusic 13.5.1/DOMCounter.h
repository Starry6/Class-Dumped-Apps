@interface DOMCounter : DOMObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString listStyle;
@property (nonatomic) NSString separator;
- (void)dealloc;
- (id)identifier;
- (id)separator;
- (id)listStyle;
@end
