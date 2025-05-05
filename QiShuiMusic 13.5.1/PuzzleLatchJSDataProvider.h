@interface PuzzleLatchJSDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getJSDataWithContainer:;
- (void)getJSDataWithContainer:completion:;
- (void)getJSDataWithContainer:sync:completion:;
- (id)getJSDataWithUrl:container:;
@end
