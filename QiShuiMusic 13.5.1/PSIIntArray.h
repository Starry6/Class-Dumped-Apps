@interface PSIIntArray : NSObject
@property (nonatomic) ^q elementBuffer;
- (void)dealloc;
- (id)initWithLabel:database:;
- (void)bindElements:numberOfElements:;
- (void)_prepareForNumberOfElements:;
- (void)_unprepare;
- (void)unbind;
- (void)bindElements:;
- (void)bindElements:range:;
- (id)elementBuffer;
- (void)unprepare;
- (void)prepareForNumberOfElements:;
@end
