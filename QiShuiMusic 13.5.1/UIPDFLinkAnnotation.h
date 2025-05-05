@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
- (id)url;
- (unsigned long long)pageNumber;
- (BOOL)recognizeGestures;
- (id)newBaseURL;
- (unsigned long long)getDestination:;
- (unsigned long long)getNamedDestination:;
- (id)linkRectangle;
- (BOOL)quadPoints:within:;
- (BOOL)shouldRecognizeTapOrPress:;
@end
